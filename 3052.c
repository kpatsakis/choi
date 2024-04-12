void fun()
{
  int entity_2 = 55;
  char* entity_4;
  char entity_6[35] = "";
  entity_6 = NULL;
  memset(entity_6, 's', 35-1);
  entity_6[35-1]='';
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  memcpy(entity_4, entity_6, 35*sizeof(char));
}
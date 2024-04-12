void fun()
{
  int entity_3 = 98;
  char* entity_0;
  char entity_7[35] = "";
  entity_7 = NULL;
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[entity_3-1]='';
  memset(entity_7, 'D', 35-1);
  entity_7[35-1]='';
  memcpy(entity_0, entity_7, 35*sizeof(char));
}
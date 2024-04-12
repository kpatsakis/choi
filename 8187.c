void fun()
{
  int entity_5 = 95;
  int entity_3 = 21;
  char* entity_2;
  char entity_7[35] = "";
  entity_7 = NULL;
  memset(entity_7, 'Y', 35-1);
  entity_7[35-1]='';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  memcpy(entity_2, entity_7, 35*sizeof(char));
}
void fun()
{
  int entity_3 = 66;
  char entity_8[29] = "";
  entity_8 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  memset(entity_8, 't', 29-1);
  entity_8[29-1]='';
  entity_3 = 23;
  strcpy(entity_2, entity_8);
}
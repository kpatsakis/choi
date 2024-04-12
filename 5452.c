void fun()
{
  int entity_6 = 34;
  entity_6 = 34;
  char entity_2[entity_6] = "";
  entity_2 = NULL;
  char* entity_8;
  memset(entity_2, 'd', entity_6-1);
  entity_2[entity_6-1]='';
  entity_8 = (char*)malloc(79*sizeof(char));
  entity_8[79-1]='';
  strcpy(entity_8, entity_2);
}
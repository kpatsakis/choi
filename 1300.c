void fun()
{
  int entity_7 = 83;
  int entity_3 = 93;
  char* entity_8;
  char entity_2[94] = "";
  entity_2 = NULL;
  memset(entity_2, 'F', 94-1);
  entity_2[94-1]='';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  entity_3 = 58;
  strcpy(entity_8, entity_2);
}
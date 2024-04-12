void fun()
{
  int entity_6 = 83;
  char* entity_8;
  char entity_3[100] = "";
  entity_3 = NULL;
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[entity_6-1]='';
  memset(entity_3, 'w', 100-1);
  entity_3[100-1]='';
  entity_6 = 62;
  strcpy(entity_8, entity_3);
}
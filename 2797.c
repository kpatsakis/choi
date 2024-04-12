void fun()
{
  int entity_0 = 44;
  char* entity_8;
  char entity_2[68] = "";
  entity_2 = NULL;
  char entity_3[95] = "";
  entity_3 = NULL;
  entity_8 = (char*)malloc(entity_0*sizeof(char));
  entity_8[entity_0-1]='';
  memset(entity_2, 'y', 68-1);
  entity_2[68-1]='';
  memset(entity_3, 'X', 95-1);
  entity_3[95-1]='';
  strcpy(entity_8, entity_2);
}
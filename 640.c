void fun()
{
  int entity_3 = 75;
  int entity_2 = 47;
  char* entity_8;
  char entity_7[42] = "";
  entity_7 = NULL;
  char entity_6[68] = "";
  entity_6 = NULL;
  memset(entity_7, 'R', 42-1);
  entity_7[42-1]='';
  entity_8 = (char*)malloc(entity_3*sizeof(char));
  entity_8[entity_3-1]='';
  memset(entity_6, 'u', 68-1);
  entity_6[68-1]='';
  strcpy(entity_8, entity_6);
}
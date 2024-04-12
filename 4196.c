void fun()
{
  int entity_5 = 7;
  entity_5 = 38;
  char entity_4[82] = "";
  entity_4 = NULL;
  char* entity_6;
  char* entity_2;
  char entity_8[21] = "";
  entity_8 = NULL;
  memset(entity_8, 'X', 21-1);
  entity_8[21-1]='';
  entity_2 = (char*)malloc(68*sizeof(char));
  entity_2[68-1]='';
  memset(entity_4, 'u', 82-1);
  entity_4[82-1]='';
  entity_6 = (char*)malloc(entity_5*sizeof(char));
  entity_6[entity_5-1]='';
  strcpy(entity_6, entity_4);
}
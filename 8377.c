void fun()
{
  int entity_1 = 24;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char* entity_7;
  char* entity_6;
  char entity_8[73] = "";
  entity_8 = NULL;
  memset(entity_2, 'k', entity_1-1);
  entity_2[entity_1-1]='';
  memset(entity_8, 'e', 73-1);
  entity_8[73-1]='';
  entity_6 = (char*)malloc(9*sizeof(char));
  entity_6[9-1]='';
  entity_7 = (char*)malloc(62*sizeof(char));
  entity_7[62-1]='';
  memcpy(entity_7, entity_2, entity_1*sizeof(char));
}
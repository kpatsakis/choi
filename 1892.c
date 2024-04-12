void fun()
{
  int entity_5 = 39;
  int entity_4 = 5;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char* entity_1;
  char entity_8[84] = "";
  entity_8 = NULL;
  char* entity_7;
  memset(entity_8, 'A', 84-1);
  entity_8[84-1]='';
  entity_1 = (char*)malloc(64*sizeof(char));
  entity_1[64-1]='';
  memset(entity_6, 'D', entity_4-1);
  entity_6[entity_4-1]='';
  entity_7 = (char*)malloc(9*sizeof(char));
  entity_7[9-1]='';
  entity_4 = 43;
  strcpy(entity_1, entity_6);
}
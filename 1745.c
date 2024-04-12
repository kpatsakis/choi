void fun()
{
  int entity_2 = 21;
  char* entity_1;
  char entity_4[71] = "";
  entity_4 = NULL;
  char* entity_7;
  char entity_8[9] = "";
  entity_8 = NULL;
  char entity_3[89] = "";
  entity_3 = NULL;
  entity_1 = (char*)malloc(85*sizeof(char));
  entity_1[85-1]='';
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[entity_2-1]='';
  memset(entity_8, 'q', 9-1);
  entity_8[9-1]='';
  memset(entity_4, 'R', 71-1);
  entity_4[71-1]='';
  memset(entity_3, 'u', 89-1);
  entity_3[89-1]='';
  memcpy(entity_7, entity_4, 71*sizeof(char));
}
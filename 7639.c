void fun()
{
  int entity_2 = 22;
  int entity_9 = 39;
  char* entity_5;
  char* entity_7;
  char* entity_3;
  char entity_6[47] = "";
  entity_6 = NULL;
  entity_3 = (char*)malloc(45*sizeof(char));
  entity_3[45-1]='';
  entity_7 = (char*)malloc(26*sizeof(char));
  entity_7[26-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  memset(entity_6, 'q', 47-1);
  entity_6[47-1]='';
  entity_2 = 27;
  strcpy(entity_5, entity_6);
}
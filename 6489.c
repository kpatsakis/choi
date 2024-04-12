void fun()
{
  int entity_2 = 80;
  int entity_1 = 69;
  entity_2 = 16;
  char* entity_5;
  char entity_4[7] = "";
  entity_4 = NULL;
  char* entity_7;
  memset(entity_4, 'd', 7-1);
  entity_4[7-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  entity_7 = (char*)malloc(26*sizeof(char));
  entity_7[26-1]='';
  strcpy(entity_5, entity_4);
}
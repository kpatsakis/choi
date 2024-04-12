void fun()
{
  int entity_1 = 85;
  entity_1 = 17;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char entity_2[65] = "";
  entity_2 = NULL;
  char* entity_7;
  memset(entity_2, 'Q', 65-1);
  entity_2[65-1]='';
  memset(entity_5, 'o', entity_1-1);
  entity_5[entity_1-1]='';
  entity_7 = (char*)malloc(74*sizeof(char));
  entity_7[74-1]='';
  entity_5[70] = 'm';
}
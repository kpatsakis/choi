void fun()
{
  int entity_5 = 61;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  char entity_1 = 'O';
  char* entity_6;
  memset(entity_7, 'C', entity_5-1);
  entity_7[entity_5-1]='';
  entity_6 = (char*)malloc(95*sizeof(char));
  entity_6[95-1]='';
  entity_5 = 8;
  entity_7[17] = 'Z';
}
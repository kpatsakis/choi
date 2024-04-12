void fun()
{
  int entity_2 = 71;
  int entity_5 = 45;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  char* entity_4;
  char entity_6 = 'h';
  entity_4 = (char*)malloc(25*sizeof(char));
  entity_4[25-1]='';
  memset(entity_7, 't', entity_5-1);
  entity_7[entity_5-1]='';
  entity_7[79] = 'P';
}
void fun()
{
  int entity_5 = 73;
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char* entity_7;
  memset(entity_1, 'X', entity_5-1);
  entity_1[entity_5-1]='';
  entity_7 = (char*)malloc(95*sizeof(char));
  entity_7[95-1]='';
  entity_5 = 50;
  entity_1[91] = 'z';
}
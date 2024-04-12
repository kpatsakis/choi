void fun()
{
  int entity_0 = 34;
  entity_0 = 28;
  char entity_6 = 'i';
  char entity_2 = 'z';
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  char* entity_5;
  memset(entity_4, 'q', entity_0-1);
  entity_4[entity_0-1]='';
  entity_5 = (char*)malloc(56*sizeof(char));
  entity_5[56-1]='';
  memcpy(entity_5, entity_4, entity_0*sizeof(char));
}
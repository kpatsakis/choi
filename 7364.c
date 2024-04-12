void fun()
{
  int entity_6 = 33;
  int entity_2 = 29;
  char entity_3 = 'i';
  char entity_7[entity_2] = "";
  entity_7 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(91*sizeof(char));
  entity_5[91-1]='';
  memset(entity_7, 'I', entity_2-1);
  entity_7[entity_2-1]='';
  entity_2 = 48;
  memcpy(entity_5, entity_7, entity_2*sizeof(char));
}
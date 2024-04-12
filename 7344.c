void fun()
{
  int entity_2 = 46;
  int entity_0 = 67;
  entity_2 = 70;
  char* entity_4;
  char entity_5 = 'x';
  char entity_7[22] = "";
  entity_7 = NULL;
  memset(entity_7, 'q', 22-1);
  entity_7[22-1]='';
  entity_4 = (char*)malloc(entity_2*sizeof(char));
  entity_4[entity_2-1]='';
  memcpy(entity_4, entity_7, 22*sizeof(char));
}
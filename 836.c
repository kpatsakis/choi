void fun()
{
  int entity_2 = 88;
  char entity_8[91] = "";
  entity_8 = NULL;
  char entity_9 = 'T';
  char* entity_6;
  char* entity_5;
  memset(entity_8, 'e', 91-1);
  entity_8[91-1]='';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[entity_2-1]='';
  entity_6 = (char*)malloc(99*sizeof(char));
  entity_6[99-1]='';
  memcpy(entity_5, entity_8, 91*sizeof(char));
}
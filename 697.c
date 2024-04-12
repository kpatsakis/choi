void fun()
{
  int entity_7 = 58;
  char* entity_8;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  char entity_2 = 'C';
  memset(entity_6, 'W', entity_7-1);
  entity_6[entity_7-1]='';
  entity_8 = (char*)malloc(99*sizeof(char));
  entity_8[99-1]='';
  memcpy(entity_8, entity_6, entity_7*sizeof(char));
}
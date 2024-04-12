void fun()
{
  int entity_1 = 28;
  char* entity_9;
  char* entity_2;
  char entity_8[99] = "";
  entity_8 = NULL;
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  memset(entity_8, 'j', 99-1);
  entity_8[99-1]='';
  entity_2 = (char*)malloc(48*sizeof(char));
  entity_2[48-1]='';
  memcpy(entity_9, entity_8, 99*sizeof(char));
}
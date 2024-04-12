void fun()
{
  int entity_8 = 82;
  entity_8 = 57;
  char entity_9 = 'h';
  char entity_3[entity_8] = "";
  entity_3 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(80*sizeof(char));
  entity_2[80-1]='';
  memset(entity_3, 'v', entity_8-1);
  entity_3[entity_8-1]='';
  memcpy(entity_2, entity_3, entity_8*sizeof(char));
}
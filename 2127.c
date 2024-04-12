void fun()
{
  int entity_7 = 54;
  char* entity_8;
  char* entity_2;
  char entity_9[24] = "";
  entity_9 = NULL;
  entity_2 = (char*)malloc(40*sizeof(char));
  entity_2[40-1]='';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  memset(entity_9, 'C', 24-1);
  entity_9[24-1]='';
  memcpy(entity_8, entity_9, 24*sizeof(char));
}
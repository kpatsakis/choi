void fun()
{
  int entity_3 = 83;
  char* entity_2;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char* entity_9;
  entity_2 = (char*)malloc(22*sizeof(char));
  entity_2[22-1]='';
  entity_9 = (char*)malloc(80*sizeof(char));
  entity_9[80-1]='';
  memset(entity_8, 'b', entity_3-1);
  entity_8[entity_3-1]='';
  memcpy(entity_2, entity_8, entity_3*sizeof(char));
}
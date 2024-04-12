void fun()
{
  int entity_2 = 23;
  int entity_8 = 72;
  char entity_1 = 'o';
  char entity_9[67] = "";
  entity_9 = NULL;
  char* entity_6;
  char* entity_7;
  memset(entity_9, 'b', 67-1);
  entity_9[67-1]='';
  entity_6 = (char*)malloc(21*sizeof(char));
  entity_6[21-1]='';
  entity_7 = (char*)malloc(entity_8*sizeof(char));
  entity_7[entity_8-1]='';
  entity_8 = 87;
  memcpy(entity_7, entity_9, 67*sizeof(char));
}
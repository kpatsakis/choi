void fun()
{
  int entity_4 = 90;
  char* entity_6;
  char* entity_8;
  char entity_9[88] = "";
  entity_9 = NULL;
  char entity_2[92] = "";
  entity_2 = NULL;
  memset(entity_9, 'x', 88-1);
  entity_9[88-1]='';
  entity_6 = (char*)malloc(28*sizeof(char));
  entity_6[28-1]='';
  memset(entity_2, 'w', 92-1);
  entity_2[92-1]='';
  entity_8 = (char*)malloc(52*sizeof(char));
  entity_8[52-1]='';
  memcpy(entity_6, entity_2, 92*sizeof(char));
}
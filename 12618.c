void fun()
{
  int entity_9 = 100;
  char* entity_1;
  char entity_7[75] = "";
  char* entity_4;
  entity_4 = (char*)malloc(entity_9*sizeof(char));
  entity_4[0]='0';
  entity_1 = (char*)malloc(97*sizeof(char));
  entity_1[0]='0';
  memset(entity_7, 'A', 75-1);
  entity_7[75-1]='0';
  memcpy(entity_4, entity_7, 75*sizeof(char));
}
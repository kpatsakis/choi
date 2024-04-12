void fun()
{
  int entity_9 = 56;
  char entity_4[47] = "";
  char* entity_2;
  char entity_3[75] = "";
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[0]='0';
  memset(entity_4, 'r', 47-1);
  entity_4[47-1]='0';
  memset(entity_3, 'T', 75-1);
  entity_3[75-1]='0';
  entity_9 = 95;
  memcpy(entity_2, entity_3, 75*sizeof(char));
}
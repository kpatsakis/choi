void fun()
{
  int entity_9 = 57;
  char entity_3[22] = "";
  char* entity_7;
  entity_7 = (char*)malloc(entity_9*sizeof(char));
  entity_7[0]='0';
  memset(entity_3, 'N', 22-1);
  entity_3[22-1]='0';
  memcpy(entity_7, entity_3, 22*sizeof(char));
}
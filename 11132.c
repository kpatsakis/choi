void fun()
{
  char* entity_1;
  char entity_7[16] = "";
  char entity_9[49] = "";
  entity_1 = (char*)malloc(54*sizeof(char));
  entity_1[0]='0';
  memset(entity_9, 'N', 49-1);
  entity_9[49-1]='0';
  memset(entity_7, 's', 16-1);
  entity_7[16-1]='0';
  memcpy(entity_1, entity_9, 49*sizeof(char));
}
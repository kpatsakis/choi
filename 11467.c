void fun()
{
  char* entity_0;
  char entity_6[16] = "";
  char* entity_9;
  entity_0 = (char*)malloc(92*sizeof(char));
  entity_0[0]='0';
  entity_9 = (char*)malloc(43*sizeof(char));
  entity_9[0]='0';
  memset(entity_6, 'h', 16-1);
  entity_6[16-1]='0';
  memcpy(entity_9, entity_6, 16*sizeof(char));
}
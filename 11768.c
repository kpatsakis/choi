void fun()
{
  int entity_3 = 28;
  char entity_9 = 'Z';
  char entity_6[92] = "";
  char* entity_7;
  memset(entity_6, 'Q', 92-1);
  entity_6[92-1]='0';
  entity_7 = (char*)malloc(19*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_6, 92*sizeof(char));
}
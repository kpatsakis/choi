void fun()
{
  char entity_5[47] = "";
  char* entity_9;
  char entity_3 = 'z';
  memset(entity_5, 'e', 47-1);
  entity_5[47-1]='0';
  entity_9 = (char*)malloc(94*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_5, 47*sizeof(char));
}
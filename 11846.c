void fun()
{
  char entity_5[82] = "";
  char entity_3 = 'M';
  char* entity_9;
  char entity_7 = 'i';
  entity_9 = (char*)malloc(90*sizeof(char));
  entity_9[0]='0';
  memset(entity_5, 'Q', 82-1);
  entity_5[82-1]='0';
  memcpy(entity_9, entity_5, 82*sizeof(char));
}
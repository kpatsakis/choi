void fun()
{
  int entity_2 = 5;
  char* entity_7;
  char entity_3[43] = "";
  entity_7 = (char*)malloc(entity_2*sizeof(char));
  entity_7[0]='0';
  memset(entity_3, 'y', 43-1);
  entity_3[43-1]='0';
  memcpy(entity_7, entity_3, 43*sizeof(char));
}
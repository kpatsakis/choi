void fun()
{
  char* entity_7;
  char entity_1[79] = "";
  entity_7 = (char*)malloc(90*sizeof(char));
  entity_7[0]='0';
  memset(entity_1, 'r', 79-1);
  entity_1[79-1]='0';
  memcpy(entity_7, entity_1, 79*sizeof(char));
}
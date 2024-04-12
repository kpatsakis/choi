void fun()
{
  char* entity_3;
  char entity_7[92] = "";
  entity_3 = (char*)malloc(86*sizeof(char));
  entity_3[0]='0';
  memset(entity_7, 'a', 92-1);
  entity_7[92-1]='0';
  memcpy(entity_3, entity_7, 92*sizeof(char));
}
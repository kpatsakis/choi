void fun()
{
  char* entity_5;
  char entity_3[92] = "";
  memset(entity_3, 't', 92-1);
  entity_3[92-1]='0';
  entity_5 = (char*)malloc(13*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_3, 92*sizeof(char));
}
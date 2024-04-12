void fun()
{
  char entity_6 = 'I';
  char entity_1 = 'I';
  char entity_8[92] = "";
  entity_8 = NULL;
  char entity_3 = 'a';
  char* entity_4;
  memset(entity_8, 'H', 92-1);
  entity_8[92-1]='';
  entity_4 = (char*)malloc(54*sizeof(char));
  entity_4[54-1]='';
  memcpy(entity_4, entity_8, 92*sizeof(char));
}
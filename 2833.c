void fun()
{
  char entity_1[92] = "";
  entity_1 = NULL;
  char* entity_8;
  memset(entity_1, 'S', 92-1);
  entity_1[92-1]='';
  entity_8 = (char*)malloc(37*sizeof(char));
  entity_8[37-1]='';
  memcpy(entity_8, entity_1, 92*sizeof(char));
}
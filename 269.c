void fun()
{
  char* entity_1;
  char entity_8[68] = "";
  entity_8 = NULL;
  entity_1 = (char*)malloc(92*sizeof(char));
  entity_1[92-1]='';
  memset(entity_8, 'J', 68-1);
  entity_8[68-1]='';
  memcpy(entity_1, entity_8, 68*sizeof(char));
}
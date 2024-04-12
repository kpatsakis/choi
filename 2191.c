void fun()
{
  int entity_1 = 98;
  char entity_3[80] = "";
  entity_3 = NULL;
  char* entity_7;
  entity_7 = (char*)malloc(88*sizeof(char));
  entity_7[88-1]='';
  memset(entity_3, 'D', 80-1);
  entity_3[80-1]='';
  memcpy(entity_7, entity_3, 80*sizeof(char));
}
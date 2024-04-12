void fun()
{
  int entity_9 = 19;
  char entity_3[3] = "";
  entity_3 = NULL;
  char* entity_8;
  memset(entity_3, 'b', 3-1);
  entity_3[3-1]='';
  entity_8 = (char*)malloc(62*sizeof(char));
  entity_8[62-1]='';
  entity_3[entity_9] = 'c';
}
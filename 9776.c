void fun()
{
  int entity_9 = 25;
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(62*sizeof(char));
  entity_6[62-1]='';
  memset(entity_3, 'u', entity_9-1);
  entity_3[entity_9-1]='';
  entity_3[84] = 'y';
}
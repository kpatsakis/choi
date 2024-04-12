void fun()
{
  char entity_4 = 'C';
  char entity_9[68] = "";
  entity_9 = NULL;
  char* entity_3;
  memset(entity_9, 'r', 68-1);
  entity_9[68-1]='';
  entity_3 = (char*)malloc(67*sizeof(char));
  entity_3[67-1]='';
  memcpy(entity_3, entity_9, 68*sizeof(char));
}
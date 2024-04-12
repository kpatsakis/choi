void fun()
{
  char entity_9[87] = "";
  entity_9 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(4*sizeof(char));
  entity_3[4-1]='';
  memset(entity_9, 'C', 87-1);
  entity_9[87-1]='';
  memcpy(entity_3, entity_9, 87*sizeof(char));
}
void fun()
{
  char* entity_1;
  char entity_9[47] = "";
  entity_9 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(48*sizeof(char));
  entity_8[48-1]='';
  memset(entity_9, 'i', 47-1);
  entity_9[47-1]='';
  entity_1 = (char*)malloc(87*sizeof(char));
  entity_1[87-1]='';
  memcpy(entity_1, entity_9, 47*sizeof(char));
}
void fun()
{
  char entity_9 = 'h';
  char entity_6[27] = "";
  entity_6 = NULL;
  char* entity_3;
  char* entity_1;
  memset(entity_6, 'I', 27-1);
  entity_6[27-1]='';
  entity_1 = (char*)malloc(34*sizeof(char));
  entity_1[34-1]='';
  entity_3 = (char*)malloc(0*sizeof(char));
  entity_3[0-1]='';
  memcpy(entity_1, entity_6, 27*sizeof(char));
}
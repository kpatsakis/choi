void fun()
{
  char entity_8[43] = "";
  entity_8 = NULL;
  char* entity_2;
  char* entity_9;
  memset(entity_8, 'e', 43-1);
  entity_8[43-1]='';
  entity_9 = (char*)malloc(62*sizeof(char));
  entity_9[62-1]='';
  entity_2 = (char*)malloc(76*sizeof(char));
  entity_2[76-1]='';
  memcpy(entity_2, entity_8, 43*sizeof(char));
}
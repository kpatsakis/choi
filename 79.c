void fun()
{
  char* entity_2;
  char entity_8[79] = "";
  entity_8 = NULL;
  memset(entity_8, 'g', 79-1);
  entity_8[79-1]='';
  entity_2 = (char*)malloc(13*sizeof(char));
  entity_2[13-1]='';
  memcpy(entity_2, entity_8, 79*sizeof(char));
}